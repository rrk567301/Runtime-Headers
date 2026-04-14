@interface SBPIDAppLocator : SBAppLocator {
    int _pid;
}

- (id)initWithPID:(int)a0;
- (id)description;
- (id)bundleIdentifier;
- (id)path;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
