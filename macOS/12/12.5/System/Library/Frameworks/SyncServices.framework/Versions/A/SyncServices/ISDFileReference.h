@class NSString, NSData, NSDate;

@interface ISDFileReference : ISDDataObject <NSCoding> {
    NSString *_persistentId;
    NSString *_path;
    NSDate *_timestamp;
    NSData *_aliasData;
    NSString *_bundleId;
    NSString *_bundleRelativePath;
    NSString *_windowsBinRelativePath;
}

+ (void)initialize;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)path;
- (id)initWithPath:(id)a0;
- (id)timestamp;
- (id)bundleId;
- (void)updateTimestamp;
- (id)persistentId;
- (id)initWithPath:(id)a0 bundleId:(id)a1 bundleRelativePath:(id)a2 windowsBinRelativePath:(id)a3;
- (BOOL)refersToFileAtPath:(id)a0;
- (BOOL)fileHasBeenModified;
- (BOOL)validateFileReference;
- (id)initWithPath:(id)a0 bundleId:(id)a1 bundleRelativePath:(id)a2;
- (id)aliasData;
- (id)bundleRelativePath;
- (id)windowsBinRelativePath;

@end
