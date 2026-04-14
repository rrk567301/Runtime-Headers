@interface TUCallStartRecordingRequest : TUCallRecordingRequest

@property (nonatomic) long long mode;
@property (nonatomic) BOOL isInitiatedLocally;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCall:(id)a0;
- (id)initWithCall:(id)a0 mode:(long long)a1 isInitiatedLocally:(BOOL)a2;

@end
