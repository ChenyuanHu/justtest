static int loop_check(struct list_head *head)
{
    struct list_head *ps, *pf;
    ps = head;
    pf = head;
    while (1) {
        ps = ps->next;
        pf = pf->next->next;
        if (pf == head || pf->prev == head)
            return 0;
        if (ps == pf)
            return 1;
    }
    return 0;
}
