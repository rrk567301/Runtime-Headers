@interface _ICNAFolderReportToDevice : NSObject {
    int _folderCollaborationMatrix[3][3];
}

- (id)init;
- (void)updateFolderCollaborationMatrixWithCollaborationStatus:(id)a0 collaborationType:(id)a1;
- (unsigned long long)countOfFoldersWithCollaborationStatus:(long long)a0 collaborationType:(long long)a1;

@end
