@interface IMDAttachmentSyndicationUtilities : NSObject

+ (void)_attachmentGUIDForCMMIsSyndicatable:(id)a0 syndicationIdentifier:(id)a1 encodedSyndicationRanges:(id)a2 isSyndicatable:(char *)a3 verbose:(char)a4;
+ (char)_attachmentGUIDIsSyndicatable:(id)a0 syndicationIdentifier:(id)a1 attachmentUTI:(id)a2 attributedBody:(id)a3 encodedSyndicationRanges:(id)a4 isCMM:(char)a5 verbose:(char)a6;
+ (unsigned long long)_attachmentSyndicationTypeForAttachmentGUID:(id)a0 syndicationIdentifier:(id)a1 attachmentUTI:(id)a2 attributedBody:(id)a3 encodedSyndicationRanges:(id)a4 isCommSafetySensitive:(char)a5 verbose:(char)a6;
+ (id)_syndicationIdentifierForAttachmentGUID:(id)a0 messageGUID:(id)a1 attributedBody:(id)a2 verbose:(char)a3;
+ (char)attachmentRecordIsSyndicatable:(id)a0 verbose:(char)a1;
+ (unsigned long long)syndicationTypeForAttachmentRecord:(id)a0 verbose:(char)a1;

@end
