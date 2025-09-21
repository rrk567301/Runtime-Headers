@interface NSWindowRestorationArchive : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ records;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

+ (void)archiveForWindows:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
+ (void)restoreArchive:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithRecords:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
