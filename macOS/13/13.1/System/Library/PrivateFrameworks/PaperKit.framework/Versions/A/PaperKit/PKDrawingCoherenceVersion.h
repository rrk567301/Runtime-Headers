@interface PKDrawingCoherenceVersion : NSObject <PKDrawingVersion> {
    void /* unknown type, empty encoding */ versionUUID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
