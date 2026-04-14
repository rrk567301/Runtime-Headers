@interface IMDAttachmentSyndicationUtilities : NSObject

+ (id)_syndicationIdentifierForAttachmentGUID:(id)a0 messageGUID:(id)a1 attributedBody:(id)a2 verbose:(BOOL)a3;
+ (BOOL)_attachmentGUIDIsSyndicatable:(id)a0 syndicationIdentifier:(id)a1 attachmentUTI:(id)a2 attributedBody:(id)a3 encodedSyndicationRanges:(id)a4 verbose:(BOOL)a5;
+ (unsigned long long)_attachmentSyndicationTypeForAttachmentGUID:(id)a0 syndicationIdentifier:(id)a1 attachmentUTI:(id)a2 attributedBody:(id)a3 encodedSyndicationRanges:(id)a4 isCommSafetySensitive:(BOOL)a5 verbose:(BOOL)a6;
+ (unsigned long long)syndicationTypeForAttachmentRecord:(id)a0 verbose:(BOOL)a1;
+ (BOOL)attachmentRecordIsSyndicatable:(id)a0 verbose:(BOOL)a1;

@end
