@interface SBPIDAppLocator : SBAppLocator {
    int _pid;
}

- (id)path;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPID:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)bundleIdentifier;

@end
