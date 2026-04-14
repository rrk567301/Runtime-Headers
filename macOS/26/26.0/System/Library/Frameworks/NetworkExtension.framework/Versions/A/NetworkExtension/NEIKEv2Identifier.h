@class NSString, NSData;

@interface NEIKEv2Identifier : NSObject <NEPrettyDescription, NSCopying>

@property (readonly) NSString *stringValue;
@property (readonly) NSString *typeDescription;
@property (readonly) unsigned long long identifierType;
@property (readonly) NSData *identifierData;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
