@class NSString;
@protocol CNContactPosterUnifiedContactIdentifierExpansion;

@interface CNIntrinsicContactIdentifierExpander : NSObject <CNContactPosterUnifiedContactIdentifierExpansion>

@property (class, readonly) id<CNContactPosterUnifiedContactIdentifierExpansion> sharedExpander;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
