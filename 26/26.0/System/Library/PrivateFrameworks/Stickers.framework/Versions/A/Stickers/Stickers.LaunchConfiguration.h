@class NSString;

@interface Stickers.LaunchConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ sectionType;
    void /* function */ identifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) double creationDate;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
