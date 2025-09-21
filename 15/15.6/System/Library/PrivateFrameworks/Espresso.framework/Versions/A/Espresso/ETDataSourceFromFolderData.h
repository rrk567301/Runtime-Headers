@class NSString, NSMutableDictionary, NSArray, NSMutableArray;

@interface ETDataSourceFromFolderData : NSObject <ETDataSource>

@property (retain, nonatomic) NSString *imagesDir;
@property (retain, nonatomic) NSMutableDictionary *folderToImages;
@property (retain, nonatomic) NSArray *imageFileNames;
@property (retain, nonatomic) NSMutableArray *classNames;
@property (retain, nonatomic) NSMutableDictionary *pathToClassIndex;
@property int numberOfClasses;
@property char balanceClassesForTraining;

- (void).cxx_destruct;
- (int)numberOfDataPoints;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })bufferWithPath:(id)a0;
- (id)dataPointAtIndex:(int)a0;
- (id)initWithFolder:(id)a0 balanceClassesForTraining:(char)a1;

@end
