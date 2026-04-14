@class NSNumber, NSAttributedString;

@interface RelayTranslationPart : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSNumber *index;
@property (nonatomic, readonly) NSAttributedString *string;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIndex:(id)a0 string:(id)a1;

@end
