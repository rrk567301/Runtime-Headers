@class NSString;

@interface PKStrokeProviderSliceIdentifierCoherence : PKStrokeProviderSliceIdentifier {
    void /* unknown type, empty encoding */ transformTimestamp;
    void /* unknown type, empty encoding */ strokeDataUUID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 tStart:(double)a1 tEnd:(double)a2;

@end
