@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal {
    int _encodingCount;
}

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)alias;
- (id)playerID;

@end
