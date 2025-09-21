@interface PKDrawingCoherenceVersion : NSObject <PKDrawingVersion> {
    void /* unknown type, empty encoding */ versionUUID;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
