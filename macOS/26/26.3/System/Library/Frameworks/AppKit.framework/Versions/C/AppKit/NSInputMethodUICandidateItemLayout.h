@class NSString, NSMutableDictionary, NSDictionary;

@interface NSInputMethodUICandidateItemLayout : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *cellDictionary;
@property (retain) NSString *identifier;
@property (retain) NSDictionary *annotationAttributes;
@property (retain) NSDictionary *titleAttributes;

- (void)clearCache;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSizeValue:(id)a0 candidateItem:(id)a1;
- (void)setSizeValue:(id)a0 key:(id)a1;
- (id)sizeValueForCandidateItem:(id)a0;

@end
