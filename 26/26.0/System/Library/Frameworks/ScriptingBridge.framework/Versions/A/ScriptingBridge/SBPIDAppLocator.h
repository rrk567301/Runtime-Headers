@interface SBPIDAppLocator : SBAppLocator {
    int _pid;
}

- (id)initWithPID:(int)a0;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)path;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
