@interface GDNullEventReporter : NSObject <BMViewEventReporter>

- (id)init;
- (char)streamDeletionWithStreamIdentifier:(id)a0 remoteName:(id)a1 error:(id *)a2;
- (char)streamPrunedWithStreamIdentifier:(id)a0 remoteName:(id)a1 error:(id *)a2;
- (char)streamUpdatedWithStreamIdentifier:(id)a0 remoteName:(id)a1 error:(id *)a2;

@end
