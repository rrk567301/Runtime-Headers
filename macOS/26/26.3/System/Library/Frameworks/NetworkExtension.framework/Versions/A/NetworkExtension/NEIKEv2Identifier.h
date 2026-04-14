@class NSString, NSData;

@interface NEIKEv2Identifier : NSObject <NEPrettyDescription, NSCopying>

@property (readonly) NSString *stringValue;
@property (readonly) NSString *typeDescription;
@property (readonly) unsigned long long identifierType;
@property (readonly) NSData *identifierData;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
