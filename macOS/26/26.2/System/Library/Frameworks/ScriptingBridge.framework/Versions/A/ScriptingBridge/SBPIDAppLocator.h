@interface SBPIDAppLocator : SBAppLocator {
    int _pid;
}

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)bundleIdentifier;
- (id)description;
- (id)initWithPID:(int)a0;
- (id)path;

@end
