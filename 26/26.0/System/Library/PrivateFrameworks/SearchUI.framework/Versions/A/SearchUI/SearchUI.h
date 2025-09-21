@interface SearchUI : NSObject

+ (id)cardFromResult:(id)a0;
+ (id)mapsDataFromResult:(id)a0;
+ (id)cellViewsForResult:(id)a0 feedbackListener:(id)a1;
+ (id)viewControllerForResult:(id)a0 feedbackListener:(id)a1;
+ (BOOL)hasValidCommandForResult:(id)a0 feedbackListener:(id)a1;
+ (BOOL)hasViewControllerForResult:(id)a0;

@end
