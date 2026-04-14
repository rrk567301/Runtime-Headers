@class NSString, NSMutableArray, NSMutableDictionary;

@interface OADTableStyleCollection : NSObject {
    NSMutableArray *_styles;
    NSMutableDictionary *_styleMap;
}

@property (copy, nonatomic) NSString *defaultTableStyleId;

- (void).cxx_destruct;
- (id)init;
- (void)addTableStyle:(id)a0;
- (id)tableStyleWithId:(id)a0;
- (id)tableStyles;

@end
