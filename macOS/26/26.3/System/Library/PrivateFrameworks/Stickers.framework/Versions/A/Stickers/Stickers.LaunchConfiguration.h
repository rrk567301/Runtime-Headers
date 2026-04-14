@class NSString;

@interface Stickers.LaunchConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ sectionType;
    void /* function */ identifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) double creationDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
