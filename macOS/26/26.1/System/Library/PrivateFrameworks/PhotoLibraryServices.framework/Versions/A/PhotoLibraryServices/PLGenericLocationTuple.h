@class NSString;

@interface PLGenericLocationTuple : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *lookupIdentifier;
@property (readonly, nonatomic) unsigned long long indexCategory;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithText:(id)a0 lookupIdentifier:(id)a1 indexCategory:(unsigned long long)a2;

@end
