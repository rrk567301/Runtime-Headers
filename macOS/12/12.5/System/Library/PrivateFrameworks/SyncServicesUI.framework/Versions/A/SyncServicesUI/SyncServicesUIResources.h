@interface SyncServicesUIResources : NSObject

+ (id)syncingCannotBeEnabledString;
+ (id)multipleComputersLoggedInString;
+ (id)syncServicesIconURL;
+ (id)syncServicesComputerIconURL;
+ (id)principleClientIdentifierForDataClassName:(id)a0;
+ (id)badgeIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 withClientIcon:(id)a2 clientSize:(struct CGSize { double x0; double x1; })a3 badgeAtPoint:(struct CGPoint { double x0; double x1; })a4;
+ (double)heightForString:(id)a0 withFont:(id)a1 forWidth:(double)a2;

@end
