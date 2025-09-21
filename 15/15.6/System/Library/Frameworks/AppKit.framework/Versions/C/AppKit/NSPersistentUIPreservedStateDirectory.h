@class NSArray, NSFileHandle, NSDate;

@interface NSPersistentUIPreservedStateDirectory : NSObject <NSSecureCoding> {
    NSArray *_publicWindowDictionaries;
    NSFileHandle *_privateStateFileHandle;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, getter=isValid) char valid;
@property (readonly, copy) NSDate *modificationDate;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id)initWithStateDirectory:(id)a0;
- (char)readRecordsIntoArray:(id)a0 includeCarbonWindows:(char)a1 includeCocoaWindows:(char)a2;

@end
