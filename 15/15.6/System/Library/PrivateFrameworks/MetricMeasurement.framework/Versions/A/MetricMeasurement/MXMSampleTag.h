@class NSSet, NSString, NSOrderedSet;

@interface MXMSampleTag : NSObject <NSSecureCoding, NSCopying> {
    NSOrderedSet *_taxonomy;
}

@property (class, readonly, copy, nonatomic) NSSet *ancestery;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domainNameString;
@property (readonly, copy, nonatomic) MXMSampleTag *parent;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualTo:(id)a0;
- (id)initWithComponents:(id)a0;
- (char)isEqualToTag:(id)a0;
- (char)containsTag:(id)a0;
- (id)initWithDNString:(id)a0;
- (id)initWithTaxonomy:(id)a0;

@end
