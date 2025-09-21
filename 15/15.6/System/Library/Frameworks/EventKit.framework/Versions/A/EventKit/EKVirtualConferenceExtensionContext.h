@class NSString, NSURL, NSDate;

@interface EKVirtualConferenceExtensionContext : NSExtensionContext

@property (readonly, nonatomic) int requestType;
@property (readonly, nonatomic) NSString *roomTypeIdentifier;
@property (readonly, nonatomic) NSURL *URLForInvalidation;
@property (readonly, nonatomic) NSURL *URLForRenewal;
@property (readonly, nonatomic) NSDate *renewalDate;

+ (id)_allowedItemPayloadClasses;

- (void)completeRequestWithInvalidationSuccess:(char)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)completeRequestWithAvailableRoomTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeRequestWithRenewalSuccess:(char)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)completeRequestWithVirtualConference:(id)a0 completionHandler:(id /* block */)a1;

@end
