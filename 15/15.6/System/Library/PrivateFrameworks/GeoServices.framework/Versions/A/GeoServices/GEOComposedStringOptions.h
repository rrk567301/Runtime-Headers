@class NSArray, NSDictionary;

@interface GEOComposedStringOptions : NSObject <NSCopying> {
    char _isUpdatingFormatString;
}

@property (retain, nonatomic) NSArray *arguments;
@property (nonatomic) char createAttributedString;
@property (nonatomic) char preserveIndividualComponents;
@property (retain, nonatomic) NSDictionary *stringAttributes;
@property (copy, nonatomic) id /* block */ formatStyleHandler;
@property (nonatomic) char shouldUpdateFormatStrings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
