@class NSString;

@interface PKStrokeProviderSliceIdentifierCoherence : PKStrokeProviderSliceIdentifier {
    void /* unknown type, empty encoding */ transformTimestamp;
    void /* unknown type, empty encoding */ strokeDataUUID;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 tStart:(double)a1 tEnd:(double)a2;

@end
