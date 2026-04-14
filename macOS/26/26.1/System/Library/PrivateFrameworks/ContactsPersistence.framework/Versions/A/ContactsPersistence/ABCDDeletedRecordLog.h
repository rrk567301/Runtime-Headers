@class NSString;

@interface ABCDDeletedRecordLog : ABCDRecord {
    id _creationDate;
}

@property (copy) NSString *deletedRecordUniqueId;

+ (BOOL)_isPublicRecord;
+ (id)_table;
+ (id)abEntityName;

- (void)setCreationDate:(id)a0;
- (id)creationDate;
- (void).cxx_destruct;
- (void)setPrimitiveCreationDate:(id)a0;
- (void)setPrimitiveCreationDateYear:(id)a0;
- (void)setPrimitiveCreationDateYearless:(id)a0;
- (void)touch:(id)a0;

@end
