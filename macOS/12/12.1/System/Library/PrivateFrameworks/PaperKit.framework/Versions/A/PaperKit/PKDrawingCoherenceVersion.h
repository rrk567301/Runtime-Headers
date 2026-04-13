@interface PKDrawingCoherenceVersion : NSObject <PKDrawingVersion> {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ context;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
