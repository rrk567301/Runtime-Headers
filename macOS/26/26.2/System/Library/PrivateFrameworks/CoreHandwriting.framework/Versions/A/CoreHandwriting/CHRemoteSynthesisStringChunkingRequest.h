@class NSString, NSArray, NSNumber;

@interface CHRemoteSynthesisStringChunkingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSArray *allowedSynthesizers;
@property (readonly, copy, nonatomic) NSNumber *mode;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 allowedSynthesizers:(id)a1;
- (id)initWithString:(id)a0 allowedSynthesizers:(id)a1 mode:(id)a2;

@end
