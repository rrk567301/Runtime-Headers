@interface TRIBiomeExperimentUpdateStreamWriter : NSObject

+ (void)clearExperimentUpdatesStream;
+ (void)deleteObsoleteEventsFromExperimentsUpdateStream;
+ (void)writeExperimentUpdateWithRecord:(id)a0 withExperimentStateIsActive:(char)a1 withUserId:(id)a2;

@end
