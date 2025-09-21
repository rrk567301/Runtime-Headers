@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long category;
@property (nonatomic) unsigned char index;
@property (nonatomic) char isSelected;
@property (nonatomic) int ear;
@property (nonatomic) int syncAttempts;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isStream;
- (id)initWithRepresentation:(id)a0;
- (id)transportRepresentation;
- (char)isMixingStream;
- (char)isStreamOrMixingStream;

@end
