@interface SearchUI : NSObject

+ (id)cellViewsForResult:(id)a0 feedbackListener:(id)a1;
+ (id)cellViewsForResult:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
+ (id)cardFromResult:(id)a0;
+ (id)mapsDataFromResult:(id)a0;
+ (BOOL)hasViewControllerForResult:(id)a0;
+ (id)viewControllerForResult:(id)a0 feedbackListener:(id)a1;

@end
