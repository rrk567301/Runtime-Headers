@class NSString, NSArray;

@interface CHRemoteSynthesisStringChunkingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSArray *allowedSynthesizers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 allowedSynthesizers:(id)a1;

@end
