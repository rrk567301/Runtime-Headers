@class NSString, NSData;

@interface NEIKEv2Identifier : NSObject <NEPrettyDescription, NSCopying>

@property (readonly) NSString *stringValue;
@property (readonly) NSString *typeDescription;
@property (readonly) unsigned long long identifierType;
@property (readonly) NSData *identifierData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
