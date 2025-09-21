@class NSString;

@interface Archetype.ATArrayOfPlayedMediaItems : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ playedMediaItems;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlayedMediaItems:(id)a0;

@end
