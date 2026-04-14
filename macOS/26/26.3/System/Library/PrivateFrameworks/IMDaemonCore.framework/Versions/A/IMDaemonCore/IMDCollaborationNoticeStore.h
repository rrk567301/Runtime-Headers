@interface IMDCollaborationNoticeStore : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_persistenceContainer;
}

- (id)init;
- (id)deleteNoticeWithGUIDString:(id)a0;
- (id)deleteAllNoticesWithCollaborationIdentifier:(id)a0;
- (id)noticesForURLs:(id)a0;
- (void).cxx_destruct;
- (void)deleteNoticesForURLs:(id)a0;
- (void)saveNotice:(id)a0;
- (id)deleteNotice:(id)a0;

@end
