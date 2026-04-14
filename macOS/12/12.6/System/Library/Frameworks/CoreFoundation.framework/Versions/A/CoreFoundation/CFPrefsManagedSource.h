@interface CFPrefsManagedSource : CFPrefsPlistSource

- (void)alreadylocked_setPrecopiedValues:(const void **)a0 forKeys:(const struct __CFString **)a1 count:(long long)a2 from:(id)a3;
- (BOOL)managed;

@end
