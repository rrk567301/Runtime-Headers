@class NSString;

@interface ABCDDeletedRecordLog : ABCDRecord {
    id _creationDate;
}

@property (copy) NSString *deletedRecordUniqueId;

+ (id)_table;
+ (BOOL)_isPublicRecord;
+ (id)abEntityName;

- (void).cxx_destruct;
- (id)creationDate;
- (void)setCreationDate:(id)a0;
- (void)setPrimitiveCreationDate:(id)a0;
- (void)setPrimitiveCreationDateYear:(id)a0;
- (void)setPrimitiveCreationDateYearless:(id)a0;
- (void)touch:(id)a0;

@end
