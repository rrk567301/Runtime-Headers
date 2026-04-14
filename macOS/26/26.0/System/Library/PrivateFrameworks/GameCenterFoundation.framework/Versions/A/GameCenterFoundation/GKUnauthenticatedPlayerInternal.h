@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal {
    int _encodingCount;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)alias;
- (BOOL)isEqual:(id)a0;
- (id)playerID;

@end
