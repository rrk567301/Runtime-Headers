@class NSArray;

@interface NEIKEv2ConfigurationMessage : NSObject <NEPrettyDescription, NSCopying> {
    unsigned long long _configurationType;
    NSArray *_attributes;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithWithAttributes:(id)a0;

@end
