@class NSString, NSArray;

@interface RelayTranslationMessage : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ guid;
    void /* function */ parts;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSArray *parts;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithGuid:(id)a0 parts:(id)a1;

@end
