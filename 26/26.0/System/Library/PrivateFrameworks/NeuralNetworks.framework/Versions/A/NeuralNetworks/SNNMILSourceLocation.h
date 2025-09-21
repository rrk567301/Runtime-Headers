@class NSString;

@interface SNNMILSourceLocation : NSObject {
    BOOL _isLocationKnown;
    struct unique_ptr<MIL::Location, std::default_delete<MIL::Location>> { struct Location *__ptr_; } _milLocation;
}

@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) unsigned long long line;
@property (readonly, nonatomic) unsigned long long column;

+ (id)locationOrEmpty:(id)a0;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isLocationKnown;
- (id)initWithFilename:(id)a0 line:(unsigned long long)a1 column:(unsigned long long)a2;
- (struct unique_ptr<MIL::Location, std::default_delete<MIL::Location>> { struct Location *x0; })milLocation;

@end
