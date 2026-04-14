@class NSString;

@interface DocumentUnderstanding.DUResult : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ comment;
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ determiningModelIdentifier;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *determiningModelIdentifier;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
