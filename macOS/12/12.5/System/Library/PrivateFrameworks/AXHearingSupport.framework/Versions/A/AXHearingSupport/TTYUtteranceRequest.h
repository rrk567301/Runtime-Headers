@class NSString, NSIndexPath;

@interface TTYUtteranceRequest : NSObject

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSString *string;
@property (weak, nonatomic) NSIndexPath *cellIndexPath;

+ (id)utteranceRequestWithIndex:(unsigned long long)a0 forString:(id)a1 inCellPath:(id)a2;

- (id)description;
- (void).cxx_destruct;

@end
