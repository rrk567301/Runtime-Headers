@class NSURL, NSData, NSString;

@interface ATXDocumentInteractionEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) NSURL *originalFileURL;
@property (readonly, copy, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBMAppDocumentInteraction:(id)a0;
- (id)initWithInteractionType:(int)a0 originalFileURL:(id)a1 bookmarkData:(id)a2 isRemote:(BOOL)a3 bundleIdentifier:(id)a4;
- (BOOL)isEqualToATXDocumentInteractionEvent:(id)a0;

@end
