@interface PKDrawingCoherenceVersion : NSObject <PKDrawingVersion> {
    void /* unknown type, empty encoding */ versionUUID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
