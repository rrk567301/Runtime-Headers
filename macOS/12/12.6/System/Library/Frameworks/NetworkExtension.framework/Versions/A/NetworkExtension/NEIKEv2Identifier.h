@class NSData, NSString;

@interface NEIKEv2Identifier : NSObject <NSCopying>

@property (readonly) unsigned long long identifierType;
@property (retain) NSData *identifierData;
@property (readonly) NSString *stringValue;

+ (id)copyTypeDescription;
+ (id)createIdentifierWithType:(unsigned long long)a0 data:(id)a1 zone:(struct _NSZone { } *)a2;
+ (id)createIdentifierWithType:(unsigned long long)a0 data:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
