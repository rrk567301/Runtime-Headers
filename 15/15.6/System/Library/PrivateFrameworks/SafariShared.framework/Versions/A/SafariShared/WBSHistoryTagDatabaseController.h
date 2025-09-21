@class WBSSQLiteDatabase;

@interface WBSHistoryTagDatabaseController : NSObject {
    WBSSQLiteDatabase *_database;
}

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (char)assignURLString:(id)a0 toTopicTagsWithIDs:(id)a1 error:(id *)a2;
- (char)clearAllTagsWithError:(id *)a0;
- (char)clearTagsFromStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)createTagsForIdentifiers:(id)a0 withTitles:(id)a1 type:(unsigned long long)a2 level:(long long)a3 error:(id *)a4;
- (char)renameTagWithID:(long long)a0 toTitle:(id)a1 error:(id *)a2;

@end
