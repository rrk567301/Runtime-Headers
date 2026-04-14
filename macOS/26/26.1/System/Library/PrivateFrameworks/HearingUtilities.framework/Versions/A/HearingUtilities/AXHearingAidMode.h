@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long category;
@property (nonatomic) unsigned char index;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) int ear;
@property (nonatomic) int syncAttempts;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isStream;
- (id)transportRepresentation;
- (id)initWithRepresentation:(id)a0;
- (BOOL)isMixingStream;
- (BOOL)isStreamOrMixingStream;

@end
