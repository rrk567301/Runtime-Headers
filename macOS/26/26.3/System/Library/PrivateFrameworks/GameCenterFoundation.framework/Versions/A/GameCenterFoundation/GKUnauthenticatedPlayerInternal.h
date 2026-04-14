@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal {
    int _encodingCount;
}

+ (BOOL)supportsSecureCoding;

- (id)alias;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)playerID;

@end
