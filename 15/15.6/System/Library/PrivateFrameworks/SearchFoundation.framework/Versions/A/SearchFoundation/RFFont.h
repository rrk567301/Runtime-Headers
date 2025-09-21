@class NSString, NSDictionary, NSData, RFSystemFont;

@interface RFFont : NSObject <RFFont, NSSecureCoding, NSCopying> {
    struct { unsigned char name : 1; unsigned char system : 1; unsigned char applySmallCaps : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int name;
@property (retain, nonatomic) RFSystemFont *system;
@property (nonatomic) char applySmallCaps;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasName;
- (id)initWithProtobuf:(id)a0;
- (char)hasApplySmallCaps;
- (char)hasSystem;

@end
