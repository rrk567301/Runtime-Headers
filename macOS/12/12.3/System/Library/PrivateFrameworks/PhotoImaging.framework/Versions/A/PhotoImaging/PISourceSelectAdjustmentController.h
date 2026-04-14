@interface PISourceSelectAdjustmentController : PIAdjustmentController

@property (nonatomic) long long sourceSelection;

+ (id)sourceSelectionKey;
+ (long long)sourceSelectionForString:(id)a0;
+ (id)stringForSourceSelection:(long long)a0;

@end
